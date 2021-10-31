#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableByte : public __JniBaseClass
	{
	public:
		// Fields
		jbyte value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableByte(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableByte(QAndroidJniObject obj);
		
		// Constructors
		MutableByte(jbyte arg0);
		
		// Methods
	};
} // namespace android::util

