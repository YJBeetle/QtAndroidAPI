#include "./DataSetObservable.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	DataSetObservable::DataSetObservable()
		: android::database::Observable(
			"android.database.DataSetObservable",
			"()V"
		) {}
	
	// Methods
	void DataSetObservable::notifyChanged() const
	{
		callMethod<void>(
			"notifyChanged",
			"()V"
		);
	}
	void DataSetObservable::notifyInvalidated() const
	{
		callMethod<void>(
			"notifyInvalidated",
			"()V"
		);
	}
} // namespace android::database

