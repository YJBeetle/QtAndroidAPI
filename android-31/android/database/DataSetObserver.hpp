#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::database
{
	class DataSetObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DataSetObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DataSetObserver(QAndroidJniObject obj);
		
		// Constructors
		DataSetObserver();
		
		// Methods
		void onChanged();
		void onInvalidated();
	};
} // namespace android::database

