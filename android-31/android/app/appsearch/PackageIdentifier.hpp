#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class PackageIdentifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageIdentifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageIdentifier(QJniObject obj);
		
		// Constructors
		PackageIdentifier(jstring arg0, jbyteArray arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getPackageName();
		jbyteArray getSha256Certificate();
		jint hashCode();
	};
} // namespace android::app::appsearch

