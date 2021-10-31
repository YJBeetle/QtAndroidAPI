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
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomDescription_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CustomDescription_Builder(QJniObject obj);
		
		// Constructors
		CustomDescription_Builder(android::widget::RemoteViews arg0);
		
		// Methods
		android::service::autofill::CustomDescription_Builder addChild(jint arg0, __JniBaseClass arg1);
		android::service::autofill::CustomDescription_Builder batchUpdate(__JniBaseClass arg0, android::service::autofill::BatchUpdates arg1);
		android::service::autofill::CustomDescription build();
	};
} // namespace android::service::autofill

