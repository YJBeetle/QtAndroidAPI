#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class ReportEventRequest;
}
namespace android::view
{
	class InputEvent;
}
class JString;

namespace android::adservices::adselection
{
	class ReportEventRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportEventRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportEventRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReportEventRequest_Builder(jlong arg0, JString arg1, JString arg2, jint arg3);
		
		// Methods
		android::adservices::adselection::ReportEventRequest build() const;
		android::adservices::adselection::ReportEventRequest_Builder setAdSelectionId(jlong arg0) const;
		android::adservices::adselection::ReportEventRequest_Builder setData(JString arg0) const;
		android::adservices::adselection::ReportEventRequest_Builder setInputEvent(android::view::InputEvent arg0) const;
		android::adservices::adselection::ReportEventRequest_Builder setKey(JString arg0) const;
		android::adservices::adselection::ReportEventRequest_Builder setReportingDestinations(jint arg0) const;
	};
} // namespace android::adservices::adselection

