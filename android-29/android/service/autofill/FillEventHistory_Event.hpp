#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::util
{
	class ArraySet;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::service::autofill
{
	class FillEventHistory_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_AUTHENTICATION_SELECTED();
		static jint TYPE_CONTEXT_COMMITTED();
		static jint TYPE_DATASET_AUTHENTICATION_SELECTED();
		static jint TYPE_DATASET_SELECTED();
		static jint TYPE_SAVE_SHOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getChangedFields();
		QAndroidJniObject getClientState();
		jstring getDatasetId();
		QAndroidJniObject getFieldsClassification();
		QAndroidJniObject getIgnoredDatasetIds();
		QAndroidJniObject getManuallyEnteredField();
		QAndroidJniObject getSelectedDatasetIds();
		jint getType();
		jstring toString();
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Bundle.hpp"
#include "../../util/ArraySet.hpp"
#include "../../../java/util/ArrayList.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	jint FillEventHistory_Event::TYPE_AUTHENTICATION_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_CONTEXT_COMMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_CONTEXT_COMMITTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_AUTHENTICATION_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_SAVE_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_SAVE_SHOWN"
		);
	}
	
	// Constructors
	void FillEventHistory_Event::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillEventHistory$Event",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FillEventHistory_Event::getChangedFields()
	{
		return __thiz.callObjectMethod(
			"getChangedFields",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	jstring FillEventHistory_Event::getDatasetId()
	{
		return __thiz.callObjectMethod(
			"getDatasetId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FillEventHistory_Event::getFieldsClassification()
	{
		return __thiz.callObjectMethod(
			"getFieldsClassification",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getIgnoredDatasetIds()
	{
		return __thiz.callObjectMethod(
			"getIgnoredDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getManuallyEnteredField()
	{
		return __thiz.callObjectMethod(
			"getManuallyEnteredField",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getSelectedDatasetIds()
	{
		return __thiz.callObjectMethod(
			"getSelectedDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	jint FillEventHistory_Event::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring FillEventHistory_Event::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FillEventHistory_Event : public __jni_impl::android::service::autofill::FillEventHistory_Event
	{
	public:
		FillEventHistory_Event(QAndroidJniObject obj) { __thiz = obj; }
		FillEventHistory_Event()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

