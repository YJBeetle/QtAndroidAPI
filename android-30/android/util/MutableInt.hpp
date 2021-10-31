#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableInt : public __JniBaseClass
	{
	public:
		// Fields
		jint value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableInt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableInt(QJniObject obj);
		
		// Constructors
		MutableInt(jint arg0);
		
		// Methods
	};
} // namespace android::util

