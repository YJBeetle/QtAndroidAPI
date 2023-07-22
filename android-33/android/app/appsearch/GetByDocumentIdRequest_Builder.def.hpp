#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}
class JString;

namespace android::app::appsearch
{
	class GetByDocumentIdRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetByDocumentIdRequest_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(JArray arg0) const;
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(JObject arg0) const;
		android::app::appsearch::GetByDocumentIdRequest_Builder addProjection(JString arg0, JObject arg1) const;
		android::app::appsearch::GetByDocumentIdRequest build() const;
	};
} // namespace android::app::appsearch

