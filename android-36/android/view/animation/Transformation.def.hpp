#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}
class JString;

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
		Transformation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Transformation();
		
		// Methods
		void clear() const;
		void compose(android::view::animation::Transformation arg0) const;
		jfloat getAlpha() const;
		android::graphics::Matrix getMatrix() const;
		jint getTransformationType() const;
		void set(android::view::animation::Transformation arg0) const;
		void setAlpha(jfloat arg0) const;
		void setTransformationType(jint arg0) const;
		JString toShortString() const;
		JString toString() const;
	};
} // namespace android::view::animation

