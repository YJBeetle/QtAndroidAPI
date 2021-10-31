#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Matrix;
}

namespace android::graphics
{
	class Camera : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Camera(QJniObject obj);
		
		// Constructors
		Camera();
		
		// Methods
		void applyToCanvas(android::graphics::Canvas arg0);
		jfloat dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2);
		jfloat getLocationX();
		jfloat getLocationY();
		jfloat getLocationZ();
		void getMatrix(android::graphics::Matrix arg0);
		void restore();
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2);
		void rotateX(jfloat arg0);
		void rotateY(jfloat arg0);
		void rotateZ(jfloat arg0);
		void save();
		void setLocation(jfloat arg0, jfloat arg1, jfloat arg2);
		void translate(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics

