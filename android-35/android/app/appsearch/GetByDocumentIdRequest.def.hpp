#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class GetByDocumentIdRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString PROJECTION_SCHEMA_TYPE_WILDCARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getIds() const;
		JString getNamespace() const;
		JObject getProjectionPaths() const;
		JObject getProjections() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

