#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}

namespace java::util::concurrent::locks
{
	class AbstractOwnableSynchronizer : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractOwnableSynchronizer(QAndroidJniObject obj);
		// Constructors
		AbstractOwnableSynchronizer() = default;
		
		// Methods
	};
} // namespace java::util::concurrent::locks

