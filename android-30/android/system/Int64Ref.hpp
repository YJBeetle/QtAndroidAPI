#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class Int64Ref : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		// QJniObject forward
		template<typename ...Ts> explicit Int64Ref(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Int64Ref(QJniObject obj);
		
		// Constructors
		Int64Ref(jlong arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::system

