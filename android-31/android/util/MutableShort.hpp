#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableShort : public __JniBaseClass
	{
	public:
		// Fields
		jshort value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableShort(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableShort(QJniObject obj);
		
		// Constructors
		MutableShort(jshort arg0);
		
		// Methods
	};
} // namespace android::util

