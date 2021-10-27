#include "./DataSetObservable.hpp"

namespace android::database
{
	// Fields
	
	DataSetObservable::DataSetObservable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DataSetObservable::DataSetObservable()
	{
		__thiz = QAndroidJniObject(
			"android.database.DataSetObservable",
			"()V"
		);
	}
	
	// Methods
	void DataSetObservable::notifyChanged()
	{
		__thiz.callMethod<void>(
			"notifyChanged",
			"()V"
		);
	}
	void DataSetObservable::notifyInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyInvalidated",
			"()V"
		);
	}
} // namespace android::database

