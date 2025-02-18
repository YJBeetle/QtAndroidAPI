#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchResult;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class SetSchemaResponse_MigrationFailure : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SetSchemaResponse_MigrationFailure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaResponse_MigrationFailure(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetSchemaResponse_MigrationFailure(JString arg0, JString arg1, JString arg2, android::app::appsearch::AppSearchResult arg3);
		
		// Methods
		jint describeContents() const;
		android::app::appsearch::AppSearchResult getAppSearchResult() const;
		JString getDocumentId() const;
		JString getNamespace() const;
		JString getSchemaType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

