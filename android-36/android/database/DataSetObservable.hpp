#pragma once

#include "./DataSetObservable.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline DataSetObservable::DataSetObservable()
		: android::database::Observable(
			"android.database.DataSetObservable",
			"()V"
		) {}
	
	// Methods
	inline void DataSetObservable::notifyChanged() const
	{
		callMethod<void>(
			"notifyChanged",
			"()V"
		);
	}
	inline void DataSetObservable::notifyInvalidated() const
	{
		callMethod<void>(
			"notifyInvalidated",
			"()V"
		);
	}
} // namespace android::database

// Base class headers
#include "./Observable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
