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
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorMatrix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorMatrix(QJniObject obj);
		
		// Constructors
		ColorMatrix();
		ColorMatrix(JFloatArray arg0);
		ColorMatrix(android::graphics::ColorMatrix &arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		JFloatArray getArray();
		void postConcat(android::graphics::ColorMatrix arg0);
		void preConcat(android::graphics::ColorMatrix arg0);
		void reset();
		void set(JFloatArray arg0);
		void set(android::graphics::ColorMatrix arg0);
		void setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1);
		void setRGB2YUV();
		void setRotate(jint arg0, jfloat arg1);
		void setSaturation(jfloat arg0);
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setYUV2RGB();
	};
} // namespace android::graphics

