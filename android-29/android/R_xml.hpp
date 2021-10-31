#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_xml : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_xml(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_xml(QAndroidJniObject obj);
		
		// Constructors
		R_xml();
		
		// Methods
	};
} // namespace android

