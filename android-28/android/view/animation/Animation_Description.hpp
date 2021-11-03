#pragma once

#include "../../../JObject.hpp"


namespace android::view::animation
{
	class Animation_Description : public JObject
	{
	public:
		// Fields
		jint type();
		jfloat value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Animation_Description(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Animation_Description(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::animation

