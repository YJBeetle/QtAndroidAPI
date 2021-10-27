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
		
		BatchUpdates_Builder(QAndroidJniObject obj);
		// Constructors
		BatchUpdates_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject transformChild(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject updateTemplate(android::widget::RemoteViews arg0);
	};
} // namespace android::service::autofill

