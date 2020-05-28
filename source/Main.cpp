#include "Math/Entity/Matrix4x4.h"
#include "Math/Entity/Matrix4x4/Operator.h"
#include "Math/Entity/Vector3.h"
#include "Math/System/Render.h"

#include <iostream>

using namespace simple;

int main() {
	std::cout << "Hello world!" << std::endl;

	Mat4 mat = math::createTranslation(Vec3(1, 2, 3));

	std::cout << mat << std::endl;

	return 0;
}
