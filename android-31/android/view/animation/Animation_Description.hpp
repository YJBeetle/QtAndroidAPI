#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::animation
{
	class Animation_Description : public __JniBaseClass
	{
	public:
		// Fields
		jint type();
		jfloat value();
		
		// QJniObject forward
		template<typename ...Ts> explicit Animation_Description(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Animation_Description(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view::animation

