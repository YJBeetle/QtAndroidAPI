#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructTimeval : public __JniBaseClass
	{
	public:
		// Fields
		jlong tv_sec();
		jlong tv_usec();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructTimeval(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StructTimeval(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::system::StructTimeval fromMillis(jlong arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jlong toMillis();
		jstring toString();
	};
} // namespace android::system

