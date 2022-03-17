#pragma once

#include "./DataSetObserver.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline DataSetObserver::DataSetObserver()
		: JObject(
			"android.database.DataSetObserver",
			"()V"
		) {}
	
	// Methods
	inline void DataSetObserver::onChanged() const
	{
		callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	inline void DataSetObserver::onInvalidated() const
	{
		callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
} // namespace android::database

// Base class headers

