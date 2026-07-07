#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest;
}
class JString;

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveByDocumentIdRequest_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(JArray arg0) const;
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(JObject arg0) const;
		android::app::appsearch::RemoveByDocumentIdRequest build() const;
	};
} // namespace android::app::appsearch

