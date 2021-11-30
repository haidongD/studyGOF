#include "productpart.h"

ProductPart::ProductPart() {}

ProductPart::~ProductPart() {}

ProductPart *ProductPart::BuildPart() { return new ProductPart(); }
