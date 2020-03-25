#pragma once

#ifndef ANDROID_DATABASE_DATASETOBSERVABLE
#define ANDROID_DATABASE_DATASETOBSERVABLE

#include "../../__JniBaseClass.hpp"
#include "Observable.hpp"


namespace __jni_impl::android::database
{
	class DataSetObservable : public __jni_impl::android::database::Observable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void notifyChanged();
		void notifyInvalidated();
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void DataSetObservable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.DataSetObservable",
			"()V");
	}
	
	// Methods
	void DataSetObservable::notifyChanged()
	{
		__thiz.callMethod<void>(
			"notifyChanged",
			"()V");
	}
	void DataSetObservable::notifyInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyInvalidated",
			"()V");
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class DataSetObservable : public __jni_impl::android::database::DataSetObservable
	{
	public:
		DataSetObservable(QAndroidJniObject obj) { __thiz = obj; }
		DataSetObservable()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_DATASETOBSERVABLE

