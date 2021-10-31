#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels
{
	class Pipe_SinkChannel;
}
namespace java::nio::channels
{
	class Pipe_SourceChannel;
}

namespace java::nio::channels
{
	class Pipe : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Pipe(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Pipe(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject open();
		QAndroidJniObject sink();
		QAndroidJniObject source();
	};
} // namespace java::nio::channels

