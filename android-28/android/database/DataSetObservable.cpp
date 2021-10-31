#include "./DataSetObservable.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	DataSetObservable::DataSetObservable(QAndroidJniObject obj) : android::database::Observable(obj) {}
	
	// Constructors
	DataSetObservable::DataSetObservable()
		: android::database::Observable(
			"android.database.DataSetObservable",
			"()V"
		) {}
	
	// Methods
	void DataSetObservable::notifyChanged()
	{
		callMethod<void>(
			"notifyChanged",
			"()V"
		);
	}
	void DataSetObservable::notifyInvalidated()
	{
		callMethod<void>(
			"notifyInvalidated",
			"()V"
		);
	}
} // namespace android::database

