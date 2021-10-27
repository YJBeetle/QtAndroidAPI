#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::database
{
	class DataSetObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		DataSetObserver(QAndroidJniObject obj);
		// Constructors
		DataSetObserver();
		
		// Methods
		void onChanged();
		void onInvalidated();
	};
} // namespace android::database

