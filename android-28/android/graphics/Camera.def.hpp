#pragma once

#include "../../JObject.hpp"

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
	class Camera : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Camera();
		
		// Methods
		void applyToCanvas(android::graphics::Canvas arg0) const;
		jfloat dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2) const;
		jfloat getLocationX() const;
		jfloat getLocationY() const;
		jfloat getLocationZ() const;
		void getMatrix(android::graphics::Matrix arg0) const;
		void restore() const;
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void rotateX(jfloat arg0) const;
		void rotateY(jfloat arg0) const;
		void rotateZ(jfloat arg0) const;
		void save() const;
		void setLocation(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void translate(jfloat arg0, jfloat arg1, jfloat arg2) const;
	};
} // namespace android::graphics

