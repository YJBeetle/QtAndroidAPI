#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class DataSetObserver : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataSetObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataSetObserver(QJniObject obj);
		
		// Constructors
		DataSetObserver();
		
		// Methods
		void onChanged() const;
		void onInvalidated() const;
	};
} // namespace android::database

