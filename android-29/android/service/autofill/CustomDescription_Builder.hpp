#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CustomDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		CustomDescription_Builder(QAndroidJniObject obj);
		// Constructors
		CustomDescription_Builder(android::widget::RemoteViews arg0);
		CustomDescription_Builder() = default;
		
		// Methods
		QAndroidJniObject addChild(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject addOnClickAction(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject batchUpdate(__JniBaseClass arg0, android::service::autofill::BatchUpdates arg1);
		QAndroidJniObject build();
	};
} // namespace android::service::autofill

