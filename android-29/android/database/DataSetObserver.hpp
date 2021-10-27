#pragma once

#ifndef ANDROID_DATABASE_DATASETOBSERVER
#define ANDROID_DATABASE_DATASETOBSERVER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::database
{
	class DataSetObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onChanged();
		void onInvalidated();
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void DataSetObserver::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.DataSetObserver",
			"()V"
		);
	}
	
	// Methods
	void DataSetObserver::onChanged()
	{
		__thiz.callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	void DataSetObserver::onInvalidated()
	{
		__thiz.callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class DataSetObserver : public __jni_impl::android::database::DataSetObserver
	{
	public:
		DataSetObserver(QAndroidJniObject obj) { __thiz = obj; }
		DataSetObserver()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_DATASETOBSERVER

