#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class PackageIdentifier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageIdentifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageIdentifier(QAndroidJniObject obj);
		
		// Constructors
		PackageIdentifier(jstring arg0, jbyteArray arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getPackageName();
		jbyteArray getSha256Certificate();
		jint hashCode();
	};
} // namespace android::app::appsearch

