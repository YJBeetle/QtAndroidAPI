#include "./DataSetObserver.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	DataSetObserver::DataSetObserver(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DataSetObserver::DataSetObserver()
		: JObject(
			"android.database.DataSetObserver",
			"()V"
		) {}
	
	// Methods
	void DataSetObserver::onChanged() const
	{
		callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	void DataSetObserver::onInvalidated() const
	{
		callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
} // namespace android::database

