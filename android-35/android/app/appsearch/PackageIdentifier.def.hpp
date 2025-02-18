#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::app::appsearch
{
	class PackageIdentifier : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageIdentifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageIdentifier(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageIdentifier(JString arg0, JByteArray arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPackageName() const;
		JByteArray getSha256Certificate() const;
		jint hashCode() const;
	};
} // namespace android::app::appsearch

