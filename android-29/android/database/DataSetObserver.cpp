#include "./DataSetObserver.hpp"

namespace android::database
{
	// Fields
	
	DataSetObserver::DataSetObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DataSetObserver::DataSetObserver()
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
} // namespace android::database

