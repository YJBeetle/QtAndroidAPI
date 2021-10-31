#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class BatchUpdates_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BatchUpdates_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BatchUpdates_Builder(QAndroidJniObject obj);
		
		// Constructors
		BatchUpdates_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject transformChild(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject updateTemplate(android::widget::RemoteViews arg0);
	};
} // namespace android::service::autofill

