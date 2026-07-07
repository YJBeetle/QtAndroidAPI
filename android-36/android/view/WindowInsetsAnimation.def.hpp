#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class WindowInsetsAnimation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowInsetsAnimation(jint arg0, JObject arg1, jlong arg2);
		
		// Methods
		jfloat getAlpha() const;
		jlong getDurationMillis() const;
		jfloat getFraction() const;
		jfloat getInterpolatedFraction() const;
		JObject getInterpolator() const;
		jint getTypeMask() const;
		void setAlpha(jfloat arg0) const;
		void setFraction(jfloat arg0) const;
	};
} // namespace android::view

