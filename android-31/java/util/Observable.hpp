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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Observable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

