#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class BatchUpdates;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class BatchUpdates_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BatchUpdates_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatchUpdates_Builder(QAndroidJniObject obj);
		
		// Constructors
		BatchUpdates_Builder();
		
		// Methods
		android::service::autofill::BatchUpdates build();
		android::service::autofill::BatchUpdates_Builder transformChild(jint arg0, JObject arg1);
		android::service::autofill::BatchUpdates_Builder updateTemplate(android::widget::RemoteViews arg0);
	};
} // namespace android::service::autofill

