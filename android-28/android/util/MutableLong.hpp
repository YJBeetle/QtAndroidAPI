#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableLong : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableLong(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MutableLong(QJniObject obj);
		
		// Constructors
		MutableLong(jlong arg0);
		
		// Methods
	};
} // namespace android::util

