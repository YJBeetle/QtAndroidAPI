#include "./TimeUnit.hpp"
#include "./CompletableFuture.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	CompletableFuture::CompletableFuture(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CompletableFuture::CompletableFuture()
		: __JniBaseClass(
			"java.util.concurrent.CompletableFuture",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CompletableFuture::allOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"allOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::anyOf(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"anyOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completedFuture(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedFuture",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completedStage(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedStage",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::failedFuture(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedFuture",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::failedStage(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedStage",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::supplyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"acceptEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::acceptEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"applyToEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::applyToEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean CompletableFuture::cancel(jboolean arg0)
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean CompletableFuture::complete(jobject arg0)
	{
		return callMethod<jboolean>(
			"complete",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::completeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CompletableFuture::completeExceptionally(jthrowable arg0)
	{
		return callMethod<jboolean>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)Z",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::completeOnTimeout(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"completeOnTimeout",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::copy()
	{
		return callObjectMethod(
			"copy",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	QAndroidJniObject CompletableFuture::defaultExecutor()
	{
		return callObjectMethod(
			"defaultExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject CompletableFuture::exceptionally(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"exceptionally",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyCompose(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"exceptionallyCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::exceptionallyComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	jobject CompletableFuture::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject CompletableFuture::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject CompletableFuture::getNow(jobject arg0)
	{
		return callObjectMethod(
			"getNow",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint CompletableFuture::getNumberOfDependents()
	{
		return callMethod<jint>(
			"getNumberOfDependents",
			"()I"
		);
	}
	QAndroidJniObject CompletableFuture::handle(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"handle",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::handleAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CompletableFuture::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean CompletableFuture::isCompletedExceptionally()
	{
		return callMethod<jboolean>(
			"isCompletedExceptionally",
			"()Z"
		);
	}
	jboolean CompletableFuture::isDone()
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	jobject CompletableFuture::join()
	{
		return callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CompletableFuture::minimalCompletionStage()
	{
		return callObjectMethod(
			"minimalCompletionStage",
			"()Ljava/util/concurrent/CompletionStage;"
		);
	}
	QAndroidJniObject CompletableFuture::newIncompleteFuture()
	{
		return callObjectMethod(
			"newIncompleteFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	void CompletableFuture::obtrudeException(jthrowable arg0)
	{
		callMethod<void>(
			"obtrudeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CompletableFuture::obtrudeValue(jobject arg0)
	{
		callMethod<void>(
			"obtrudeValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	QAndroidJniObject CompletableFuture::orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"orTimeout",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBoth(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"runAfterBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEither(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"runAfterEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::runAfterEitherAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAccept(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenAccept",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBoth(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenAcceptBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenAcceptBothAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApply(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenApply",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenApplyAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombine(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenCombine",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCombineAsync(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenCompose(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenComposeAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRun(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenRun",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::thenRunAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject CompletableFuture::toCompletableFuture()
	{
		return callObjectMethod(
			"toCompletableFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	jstring CompletableFuture::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CompletableFuture::whenComplete(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"whenComplete",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	QAndroidJniObject CompletableFuture::whenCompleteAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

