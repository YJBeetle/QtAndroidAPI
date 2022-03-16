#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class BatchUpdates;
}
namespace android::service::autofill
{
	class CustomDescription;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class CustomDescription_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CustomDescription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomDescription_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CustomDescription_Builder(android::widget::RemoteViews arg0);
		
		// Methods
		android::service::autofill::CustomDescription_Builder addChild(jint arg0, JObject arg1) const;
		android::service::autofill::CustomDescription_Builder batchUpdate(JObject arg0, android::service::autofill::BatchUpdates arg1) const;
		android::service::autofill::CustomDescription build() const;
	};
} // namespace android::service::autofill

