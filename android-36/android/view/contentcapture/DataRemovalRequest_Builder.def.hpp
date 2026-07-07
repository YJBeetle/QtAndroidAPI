#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::view::contentcapture
{
	class DataRemovalRequest;
}

namespace android::view::contentcapture
{
	class DataRemovalRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataRemovalRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataRemovalRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DataRemovalRequest_Builder();
		
		// Methods
		android::view::contentcapture::DataRemovalRequest_Builder addLocusId(android::content::LocusId arg0, jint arg1) const;
		android::view::contentcapture::DataRemovalRequest build() const;
		android::view::contentcapture::DataRemovalRequest_Builder forEverything() const;
	};
} // namespace android::view::contentcapture

