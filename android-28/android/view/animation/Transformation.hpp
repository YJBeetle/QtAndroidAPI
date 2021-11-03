#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}

namespace android::view::animation
{
	class Transformation : public JObject
	{
	public:
		// Fields
		static jint TYPE_ALPHA();
		static jint TYPE_BOTH();
		static jint TYPE_IDENTITY();
		static jint TYPE_MATRIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit Transformation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transformation(QJniObject obj);
		
		// Constructors
		Transformation();
		
		// Methods
		void clear();
		void compose(android::view::animation::Transformation arg0);
		jfloat getAlpha();
		android::graphics::Matrix getMatrix();
		jint getTransformationType();
		void set(android::view::animation::Transformation arg0);
		void setAlpha(jfloat arg0);
		void setTransformationType(jint arg0);
		jstring toShortString();
		jstring toString();
	};
} // namespace android::view::animation

