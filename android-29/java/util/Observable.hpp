#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Vector;
}

namespace java::util
{
	class Observable : public __JniBaseClass
	{
	public:
		// Fields
		
		Observable(QAndroidJniObject obj);
		// Constructors
		Observable();
		
		// Methods
		void addObserver(__JniBaseClass arg0);
		jint countObservers();
		void deleteObserver(__JniBaseClass arg0);
		void deleteObservers();
		jboolean hasChanged();
		void notifyObservers();
		void notifyObservers(jobject arg0);
	};
} // namespace java::util

