#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::appsearch
{
	class AppSearchBlobHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchBlobHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBlobHandle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::app::appsearch::AppSearchBlobHandle createWithSha256(JByteArray arg0, JString arg1, JString arg2, JString arg3);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDatabaseName() const;
		JString getNamespace() const;
		JString getPackageName() const;
		JByteArray getSha256Digest() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

