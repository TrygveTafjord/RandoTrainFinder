#include "gdal_priv.h"
#include "cpl_conv.h"
#include <iostream>
#include <vector>

int main() {
    // Initialize GDAL
    GDALAllRegister();

    // Open your DTM file
    GDALDataset *dataset = (GDALDataset *) GDALOpen("dtm1/data/dtm1_33_115_135.tif", GA_ReadOnly);
    if (dataset == nullptr) {
        std::cerr << "Failed to open DTM file!" << std::endl;
        return 1;
    }

    int width = dataset->GetRasterXSize();
    int height = dataset->GetRasterYSize();
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
                                                                    
    GDALClose(dataset);
    return 0;
}
