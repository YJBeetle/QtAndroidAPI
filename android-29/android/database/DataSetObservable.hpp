#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Observable.hpp"


namespace android::database
{
	class DataSetObservable : public android::database::Observable
	{
	public:
		// Fields
		
		DataSetObservable(QAndroidJniObject obj);
		// Constructors
		DataSetObservable();
		
		// Methods
		void notifyChanged();
		void notifyInvalidated();
	};
} // namespace android::database

