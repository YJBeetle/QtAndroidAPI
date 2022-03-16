#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JObject;

namespace android::graphics
{
	class ColorMatrix : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorMatrix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorMatrix(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ColorMatrix();
		ColorMatrix(JFloatArray arg0);
		ColorMatrix(android::graphics::ColorMatrix &arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JFloatArray getArray() const;
		void postConcat(android::graphics::ColorMatrix arg0) const;
		void preConcat(android::graphics::ColorMatrix arg0) const;
		void reset() const;
		void set(JFloatArray arg0) const;
		void set(android::graphics::ColorMatrix arg0) const;
		void setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1) const;
		void setRGB2YUV() const;
		void setRotate(jint arg0, jfloat arg1) const;
		void setSaturation(jfloat arg0) const;
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setYUV2RGB() const;
	};
} // namespace android::graphics

